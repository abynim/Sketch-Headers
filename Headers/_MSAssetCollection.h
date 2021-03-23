//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSModelObject.h>

@class MSImageCollection, NSArray, NSMutableArray;

@interface _MSAssetCollection : MSModelObject
{
    NSArray *_images;
    NSMutableArray *_colorAssets;
    NSMutableArray *_exportPresets;
    NSMutableArray *_gradientAssets;
    MSImageCollection *_imageCollection;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)refaultChildrenAgainst:(id)arg1;
- (void)setRaw_imageCollection:(id)arg1;
- (void)setRaw_gradientAssets:(id)arg1;
- (void)setRaw_exportPresets:(id)arg1;
- (void)setRaw_colorAssets:(id)arg1;
- (void)setRaw_images:(id)arg1;
- (id)childCollaborationObjectWithID:(id)arg1 removing:(BOOL)arg2;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)moveGradientAssetFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllGradientAssets;
- (void)removeGradientAssetsAtIndexes:(id)arg1;
- (void)removeGradientAssetAtIndex:(unsigned long long)arg1;
- (void)removeGradientAsset:(id)arg1;
- (void)insertGradientAssets:(id)arg1 afterGradientAsset:(id)arg2;
- (void)insertGradientAsset:(id)arg1 afterGradientAsset:(id)arg2;
- (void)insertGradientAssets:(id)arg1 beforeGradientAsset:(id)arg2;
- (void)insertGradientAsset:(id)arg1 beforeGradientAsset:(id)arg2;
- (void)insertGradientAsset:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addGradientAssets:(id)arg1;
- (void)addGradientAsset:(id)arg1;
- (void)moveExportPresetFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllExportPresets;
- (void)removeExportPresetsAtIndexes:(id)arg1;
- (void)removeExportPresetAtIndex:(unsigned long long)arg1;
- (void)removeExportPreset:(id)arg1;
- (void)insertExportPresets:(id)arg1 afterExportPreset:(id)arg2;
- (void)insertExportPreset:(id)arg1 afterExportPreset:(id)arg2;
- (void)insertExportPresets:(id)arg1 beforeExportPreset:(id)arg2;
- (void)insertExportPreset:(id)arg1 beforeExportPreset:(id)arg2;
- (void)insertExportPreset:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addExportPresets:(id)arg1;
- (void)addExportPreset:(id)arg1;
- (void)moveColorAssetFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllColorAssets;
- (void)removeColorAssetsAtIndexes:(id)arg1;
- (void)removeColorAssetAtIndex:(unsigned long long)arg1;
- (void)removeColorAsset:(id)arg1;
- (void)insertColorAssets:(id)arg1 afterColorAsset:(id)arg2;
- (void)insertColorAsset:(id)arg1 afterColorAsset:(id)arg2;
- (void)insertColorAssets:(id)arg1 beforeColorAsset:(id)arg2;
- (void)insertColorAsset:(id)arg1 beforeColorAsset:(id)arg2;
- (void)insertColorAsset:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addColorAssets:(id)arg1;
- (void)addColorAsset:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) MSImageCollection *imageCollection; // @synthesize imageCollection=_imageCollection;
@property(retain, nonatomic) NSArray *gradientAssets; // @synthesize gradientAssets=_gradientAssets;
@property(retain, nonatomic) NSArray *exportPresets; // @synthesize exportPresets=_exportPresets;
@property(retain, nonatomic) NSArray *colorAssets; // @synthesize colorAssets=_colorAssets;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

