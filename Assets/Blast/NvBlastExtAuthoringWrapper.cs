//using System;
//using System.Collections;
//using System.Collections.Generic;
//using System.Runtime.InteropServices;
//using UnityEngine;


//[StructLayout(LayoutKind.Sequential)]
//public struct NoiseConfiguration
//{
//    public float amplitude;//0 - disabled
//    public float frequency;//:1
//    public int octaveNumber;//:1
//    public int surfaceResolution;//:1
//};

//[StructLayout(LayoutKind.Sequential)]
//public struct SlicingConfiguration
//{
//    public Vector3Int slices;
//    public float offset_variations;//0-1:0
//    public float angle_variations;//0-1:0
//    public NoiseConfiguration noise;
//};

//public static class NvBlastExtAuthoringWrapper
//{
//	//!AJB 20180809	Function was moved to a different plug in
//	public const string DLL_NAME = "NvBlastExtAuthoring" + NvBlastWrapper.DLL_POSTFIX + "_" + NvBlastWrapper.DLL_PLATFORM;      // NvBlastExtAssetUtils

//	#region Dll
//    [DllImport(DLL_NAME)]
//    public static extern IntPtr NvBlastExtAuthoringCreateFractureTool();

//    [DllImport(DLL_NAME)]
//    public static extern void NvBlastExtAuthoringReleaseFractureTool(IntPtr tool);

//    [DllImport(DLL_NAME)]
//    public static extern void NvBlastExtAuthoringSetSourceMesh(IntPtr tool, string filePath);

//    [DllImport(DLL_NAME)]
//    public static extern void NvBlastExtAuthoringVoronoiFracture(IntPtr tool, int cellCount);

//    [DllImport(DLL_NAME)]
//    public static extern void NvBlastExtAuthoringExportToObj(IntPtr tool, string outDir);

//    #endregion
//}

//public class NvBlastMesh : IDisposable
//{
//    public IntPtr nativePtr = IntPtr.Zero;
//    public NvBlastMesh(IntPtr ptr)
//    {
//        nativePtr = ptr;
//    }
//    ~NvBlastMesh()
//    {
//        Dispose(false);
//    }
//    public void Dispose()
//    {
//        Dispose(true);
//        GC.SuppressFinalize(this);
//    }
//    protected virtual void Dispose(bool disposing)
//    {
//        if (nativePtr != IntPtr.Zero)
//        {
//            NvBlastExtAuthoringWrapper.NvBlastExtAuthoringReleaseFractureTool(nativePtr);
//            nativePtr = IntPtr.Zero;
//        }
//    }
//}

//public class FractureTool : IDisposable
//{
//    public IntPtr Ptr { get; private set; }

//    public FractureTool()
//    {
//        Ptr = NvBlastExtAuthoringWrapper.NvBlastExtAuthoringCreateFractureTool();
//    }

//    public void Dispose()
//    {
//        if (Ptr != IntPtr.Zero)
//        {
//            NvBlastExtAuthoringWrapper.NvBlastExtAuthoringReleaseFractureTool(Ptr);
//            Ptr = IntPtr.Zero;
//        }
//    }
//}