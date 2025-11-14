#include "texture_holder.h"

TextureHolder::TextureHolder() {}

void TextureHolder::Initialize(Device &device) {
    textureDesc.dimension = TextureDimension::_2D;
    textureDesc.size = {256, 256, 1}; // TODO: Parametr
    textureDesc.mipLevelCount = 1;
    textureDesc.sampleCount = 1;
    textureDesc.format = TextureFormat::RGBA8Unorm; // 8 bits each col
    textureDesc.usage =
        TextureUsage::TextureBinding |  // Can sample in shader
        TextureUsage::CopyDst;          // Can go CPU -> GPU
        // TextureUsage::TextureBinding | TextureUsage::StorageBinding;
    textureDesc.viewFormatCount = 0;
    textureDesc.viewFormats = nullptr;

    texture = device.createTexture(textureDesc);

    TextureViewDescriptor textureViewDesc;

    textureViewDesc.aspect = TextureAspect::All;
    textureViewDesc.baseArrayLayer = 0;
    textureViewDesc.arrayLayerCount = 1;
    textureViewDesc.baseMipLevel = 0;
    textureViewDesc.mipLevelCount = 1;
    textureViewDesc.dimension = TextureViewDimension::_2D;
    textureViewDesc.format = textureDesc.format;
    textureView = texture.createView(textureViewDesc);
}

void TextureHolder::WriteToTexture(Queue &queue, const std::vector<uint8_t> &pixels) {
    // What part of texture we upload to
    ImageCopyTexture destination;
    destination.texture = texture;
    destination.mipLevel = 0; // Write to the 1st mip level
    destination.origin = {0,0,0}; // Offset we write to
    destination.aspect = TextureAspect::All; // irrelevant for color textures

    // How is the C++ pixel memory laid out?
    TextureDataLayout source;
    source.offset = 0; // Offset of what we read from
    source.bytesPerRow = 4 * textureDesc.size.width; // Stride (may be rounded up)
    source.rowsPerImage = textureDesc.size.height; // Important for uploading multiple images at once

    queue.writeTexture(destination, pixels.data(), pixels.size(), source, textureDesc.size);
}

void TextureHolder::Destroy() {
    texture.destroy();
    texture.release();
}