//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSLayerGroup.h>

@class MSColor, MSLayoutGrid, MSRulerData, MSSimpleGrid, NSDictionary;

@interface _MSArtboardGroup : MSLayerGroup
{
    BOOL _hasBackgroundColor;
    BOOL _includeBackgroundColorInExport;
    BOOL _includeInCloudUpload;
    BOOL _isFlowHome;
    NSDictionary *_presetDictionary;
    BOOL _resizesContent;
    MSColor *_backgroundColor;
    MSSimpleGrid *_grid;
    MSRulerData *_horizontalRulerData;
    MSLayoutGrid *_layout;
    MSRulerData *_verticalRulerData;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
+ (BOOL)hasClickThroughDefault;
+ (id)defaultBackgroundColor;
- (void).cxx_destruct;
- (void)refaultChildrenAgainst:(id)arg1;
- (void)setRaw_verticalRulerData:(id)arg1;
- (void)setRaw_layout:(id)arg1;
- (void)setRaw_horizontalRulerData:(id)arg1;
- (void)setRaw_grid:(id)arg1;
- (void)setRaw_backgroundColor:(id)arg1;
- (void)setRaw_resizesContent:(BOOL)arg1;
- (void)setRaw_presetDictionary:(id)arg1;
- (void)setRaw_isFlowHome:(BOOL)arg1;
- (void)setRaw_includeInCloudUpload:(BOOL)arg1;
- (void)setRaw_includeBackgroundColorInExport:(BOOL)arg1;
- (void)setRaw_hasBackgroundColor:(BOOL)arg1;
- (id)childCollaborationObjectWithID:(id)arg1 removing:(BOOL)arg2;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) MSRulerData *verticalRulerData; // @synthesize verticalRulerData=_verticalRulerData;
@property(retain, nonatomic) MSLayoutGrid *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MSRulerData *horizontalRulerData; // @synthesize horizontalRulerData=_horizontalRulerData;
@property(retain, nonatomic) MSSimpleGrid *grid; // @synthesize grid=_grid;
@property(retain, nonatomic) MSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL resizesContent; // @synthesize resizesContent=_resizesContent;
@property(retain, nonatomic) NSDictionary *presetDictionary; // @synthesize presetDictionary=_presetDictionary;
@property(nonatomic) BOOL isFlowHome; // @synthesize isFlowHome=_isFlowHome;
@property(nonatomic) BOOL includeInCloudUpload; // @synthesize includeInCloudUpload=_includeInCloudUpload;
@property(nonatomic) BOOL includeBackgroundColorInExport; // @synthesize includeBackgroundColorInExport=_includeBackgroundColorInExport;
@property(nonatomic) BOOL hasBackgroundColor; // @synthesize hasBackgroundColor=_hasBackgroundColor;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) BOOL hasDefaultBackgroundColor;

@end

