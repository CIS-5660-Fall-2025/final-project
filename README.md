# Final Project!

This is it! The culmination of your procedural graphics experience this semester. For your final project, we'd like to give you the time and space to explore a topic of your choosing. You may choose any topic you please, so long as you vet the topic and scope with an instructor or TA. We've provided some suggestions below. The scope of your project should be roughly 1.5 homework assignments). To help structure your time, we're breaking down the project into 4 milestones:

## Project planning: Design Doc (due 11/5)
Before submitting your first milestone, _you must get your project idea and scope approved by Rachel, Adam or a TA._

### Design Doc
Start off by forking this repository. In your README, write a design doc to outline your project goals and implementation plan. It must include the following sections:

#### Introduction
What motivates your project?

Wings look cool, but can be difficult to model individually due to their high number of different feathers and layers. These underlying patterns though lend themselves towards a procedural approach both in generating varius skeletal structures and feather groups, as well as varius sizes and styles of feathers themselves. 

#### Goal
What do you intend to achieve with this project?

In Houdini create an HDA that given a few high level parameters (species/preset, wingspan, spread, etc) creates a semi-realistic procedurally generated bird wing. Additional goals include rendering and displaying specific results from the HDA, as well as potentially adding rigging or simulation effects.

#### Inspiration/reference:
- You must have some form of reference material for your final project. Your reference may be a research paper, a blog post, some artwork, a video, another class at Penn, etc.  
- Include in your design doc links to and images of your reference material.

* [Avian Report: Ornithology and Bird Biology](https://avianreport.com/ornithology-bird-biology/)
* [Everything You Need To Know About Feathers](https://academy.allaboutbirds.org/feathers-article/)
* [The Form and Motion of Real Birds: Morphology of Aves](https://falconsongstudios.com/bird-anatomy)
* [Birdify: Wing Shapes](https://www.birdfy.com/blogs/blogs/types-of-bird-wings-everything-you-need-to-know?srsltid=AfmBOooqPglGS5LFMCmoPbHOaWTLjkM7Vb7iix4vRPwi86O1jhLUzl7k)
* [How To Draw Wings](https://www.clipstudio.net/how-to-draw/archives/168451)

#### Specification and Techniques:
Outline the main features of your project.
What are the main technical/algorithmic tools you’ll be using? Give an overview, citing specific papers/articles.

* Parameters and models for feathers - likely a mix of houdini and blender
* Wing skeleton generator
* Feather rows and individual feather placement and orientation modules
* Featured presets and renders with shading and uvs
* Stretch: Rigging/animation


#### Timeline:
Create a week-by-week set of milestones for each person in your group. Make sure you explicitly outline what each group member's duties will be.

* Milestone 1: Create a base houdini generator able to produce a simple wing, look into rigging underlying skeletal structure
* Milesone 2: Iterate and refine the generator to function better and develop set presets of settings that look good and demonstrate various types of wings.
* Final: Develop presets into proper renders and scenes/turntables showcasing the generators results


Submit your Design doc as usual via pull request against this repository.






# Procedural Bird Wing Generator (Houdini HDA)

## Introduction

Bird wings have a beautiful, rule‑driven structure that’s ideal for procedural modeling: a skeletal arm/hand scaffold, aerodynamic surface, and layered rows of feathers (primaries, secondaries, coverts) with predictable size, spacing, and orientation gradients. This project builds a Houdini Digital Asset (HDA) that generates high‑quality bird wings from a small set of parameters and biologically inspired rules, suitable for still renders or export to DCC/game engines.

## Goal

Create a single HDA that, given a few high‑level inputs (species/preset, wingspan, pose/spread), outputs a watertight wing with:

* Correct feather row layout (primaries, secondaries, greater/middle/lesser coverts, alula).
* Per‑feather geometry with rachis, vane asymmetry, twist, and subtle irregularities.
* Clean UVs/material IDs for rendering; LODs for dense rows.
* Optional animation controls for fold/spread and simple dynamics.

## Inspiration / Reference

**Visual/anatomy references (to include as images/links in README):**

* Wing anatomy diagrams showing: humerus → radius/ulna → manus; feather tracts; alula placement.
* Photograph sets of a gull/raptor/songbird wing in spread and folded poses.
* Macro photos of flight feathers (rachis, vane asymmetry, notch, tip rounding).

**Technical inspiration:**

* Procedural instancing along guide curves.
* Attribute‑driven distribution (size/spacing gradients, noise warping).
* Collision/overlap mitigation via point cloud repel.

> (Insert 3–5 annotated reference images in README: one anatomy schematic, one spread wing photo, one close‑up feather.)

## Specification

### Inputs & High‑Level Parameters

* **Preset (species):** "Gull", "Songbird", "Raptor" (affects counts/ratios).
* **Wingspan (m)** and **Spread** (0–1 folded→fully spread).
* **Primary count** (e.g., 10), **Secondary count** (e.g., 12–18), **Alula count** (e.g., 3–5).
* **Coverts density multipliers** (greater/middle/lesser).
* **Feather profile:** base length, taper curve, vane asymmetry, rachis curvature, tip rounding.
* **Variation controls:** jitter in length/angle/roll, missing/damaged probability.
* **Look:** material set (keratin color ramp, spec/roughness), subtle translucency for primaries.
* **Output:** poly mesh, packed prims for feathers, groups/IDs, optional LODs.

### System Overview

1. **Skeletal Guides Module**

   * Generate arm/forearm/hand guide curves based on wingspan & spread.
   * Build a **wing surface** (NURBS or poly) via sweep/skin between guides.
2. **Feather Row Layout Module**

   * Derive **insertion curves** along the wing surface for: primaries (manus edge), secondaries (ulna edge), coverts (three layered bands), alula (thumb).
   * Compute per‑row **count** & **parametric positions** (curveU) using species preset.
3. **Feather Generator Module**

   * For each point (feather root), synthesize a feather geometry:

     * **Rachis**: curved spine (Bezier along local frame), thickness profile.
     * **Vanes**: left/right planes with asymmetry; bevelled edge; tip rounding; optional notch.
     * **Micro detail**: normal/opacity maps for barbs (texture‑based for perf).
     * **UVs** laid out per feather; material ID set by row.
   * Output as **packed prim** with attributes: `@row`, `@index`, `@length`, `@twist`, `@roll`, `@spreadBias`.
4. **Placement & Orientation Module**

   * Orient each feather using the insertion curve **tangent** (yaw), wing surface **normal** (pitch), and species‑specific **twist/dihedral**.
   * Apply **roll** to follow airfoil camber; fan out primaries from the manus.
5. **Overlap & Naturalism Module**

   * Apply **size gradient** (longer near distal primaries, shorter proximally for secondaries; coverts layered).
   * **Jitter**: small noise in yaw/pitch/roll/length to avoid perfect regularity.
   * **Repel pass**: detect overlapping bounding boxes and nudge roll/offsets to reduce intersections.
6. **Shading & UV Module**

   * Assign keratin base color ramp by row and radial position; subtle translucency on primaries.
   * Generate UVs per feather and optional **atlas** for batching; output material IDs per row.
7. **Rig/Animation (Optional)**

   * Parameterize a fold/spread pose; drive feather roll and overlap automatically with spread.
   * Optional Vellum/soft constraints for secondary flutter in wind.
8. **Export**

   * Output clean mesh groups or packed prims; optional FBX/ABC with materials; LOD variants.

## Techniques

### Distribution & Attributes

* Scatter points along insertion curves via `resample` (by arclength). Map `curveu → length/angle` using ramps.
* Per‑row attributes:

  * `@len` (feather length), `@yaw/pitch/roll` (orientation), `@twist`, `@thick` (rachis thickness), `@id_row` (enum), `@dihedral`.
* Species presets load default ramps and counts.

### Feather Geometry Synthesis

* Rachis as a param curve `r(s)`: cubic Bezier offset from root along local frame; thickness `t(s)`.
* Vanes as two offset surfaces from rachis centerline: widths `w_left(s)`, `w_right(s)` for asymmetry; shell/thickness via polyextrude.
* Tip rounding: blend to circular cap using smoothstep on `s`.
* Microstructure via normal/opacity maps; optional low‑density barb strands near tip (instanced curves) for hero shots.

### Orientation Frames

* Build local frames from **Frenet** of insertion curve and wing surface normal.
* Additional aerodynamic **twist** toward tip; roll blend for coverts to tuck under next row.

### Overlap Mitigation (Repel Pass)

Use point cloud checks to push neighbors apart minimally:

```c
// Wrangle on feather roots (packed prims carry bbox attrs)
float r = chf("search_radius");
int pts[] = pcfind(0, "P", @P, r, 8);
foreach (int p; pts){
    if (p==@ptnum) continue;
    vector d = @P - point(0, "P", p);
    float dist = length(d);
    float minDist = 0.5*(f@bbox_w + point(0, "bbox_w", p));
    if (dist < minDist && dist>1e-4){
        float t = smoothstep(minDist, minDist*0.7, dist);
        @roll += fit01(t, 0.0, chf("roll_push"));
        @P += normalize(d) * (minDist - dist) * chf("pos_push");
    }
}
```

(Here `bbox_w` is a precomputed lateral half‑width per feather.)

### UVs & Materials

* Rachis: longitudinal UVs.
* Vanes: radial UVs from shaft; black‑to‑white mask for translucency; per‑row color ramps.

### Performance & LOD

* Represent feathers as **packed prims** with instanceable variants.
* Provide LOD levels: full geo → mid (simplified vanes) → billboard card with normal/opacity.
* Group switching by distance parameter.

## HDA Design

**Node Graph (high level):**

```
[Skeletal Guides] → [Wing Surface]
                     ↘ [Insertion Curves]
[Row Scatter & Attrs] → [Feather Generator]
                           ↘ [Placement & Orient]
[Repel / Overlap Fix] → [UVs & Materials] → [LOD / Export]
```

**Interface (parameter panes):**

* **General:** preset, wingspan, spread, seed.
* **Counts:** primaries, secondaries, alula, covert densities.
* **Profiles:** length/taper/twist ramps (row‑scoped multiparm).
* **Variation:** jitter magnitudes, damage %, missing %.
* **Look:** color ramp per row, translucency, roughness.
* **Dynamics (opt):** wind strength, stiffness, drag.
* **Export:** pack/instance toggle, LOD thresholds, group names.

## Timeline (dates per course milestones)

**Design Doc (due Thu 11/06)**

* Finalize scope/presets, block diagram, attribute schema.
* Set up HDA scaffold with placeholder modules & parameters.

**Milestone #1 (Thu 11/13)**

* ✅ Skeletal guides + wing surface.
* ✅ Insertion curves & row scatters for primaries/secondaries.
* ✅ Feather generator v1 (rachis + simple vane card) as packed instances.
* ✅ Orientation working for primaries; basic color/UVs.
* **Deliverables:** screenshots of spread wing with primary/secondary rows; parameter UI.

**Milestone #2 (Tue 11/25)**

* ✅ Coverts and alula rows; refined feather geometry (tip rounding, asymmetry).
* ✅ Repel/overlap pass + jitter/variation.
* ✅ Material polish (translucency mask), UV cleanup; LOD levels.
* ✅ Optional fold/spread control rig.
* **Deliverables:** turntable renders + close‑ups; perf stats (feather count vs. cook time).

**Final (Tue 12/02)**

* ✅ Presets (gull/raptor/songbird), colorways, hero stills.
* ✅ Short camera animation (spread → slight flutter) if dynamics included.
* ✅ README: results gallery, parameter table, post‑mortem.

## Risks & Mitigations

* **Overlap artifacts:** add repel pass; bias roll per row.
* **Cook time/memory:** use packed prims/instances; limit hero detail to close‑ups; provide LODs.
* **Shading complexity:** prefer texture‑based barb detail over geometry; pre‑bake masks.
* **Pose realism:** encode spread‑dependent roll/twist curves from reference photos.

## Evaluation / What “Done” Looks Like

* Three presets produce wings that look consistent with reference photos.
* Clean row layering with minimal intersections at typical spreads.
* Material reads as keratin with subtle translucency on primaries.
* Reasonable performance: interactive parameter edits at ≤ ~2–5M polys (packed/instanced) or fast viewport with LODs.

## Stretch Goals

* Two‑sided wing assembly (left/right with mirrored asymmetry), plus shoulder/torso stub.
* Simple flight pose sequence (fold → spread → camber) and/or wind‑driven Vellum flutter.
* Damage/wear model (chip masks on tips, melanistic bars/striations via procedural textures).
* Export tool to Unreal/Unity with standardized material instances.

## Testing Plan

* Unit‑style: visualize per‑row attributes as colors; debug gizmos for frames.
* Visual: compare silhouette and layering against 2–3 reference photos.
* Performance: measure cook time vs. counts; validate LOD switching.

## Deliverables (for README)

* **Milestone 1:** Layout screenshots + UI.
* **Milestone 2:** Turntable + close‑ups + perf table.
* **Final:** Hero renders, preset gallery, (optional) short clip; post‑mortem discussion of cuts/choices.
