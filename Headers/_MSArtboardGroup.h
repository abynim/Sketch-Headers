#import "MSLayerGroup.h"

@class MSColor, MSLayoutGrid, MSRulerData, MSSimpleGrid;

@interface _MSArtboardGroup : MSLayerGroup
{
    BOOL _hasBackgroundColor;
    BOOL _includeBackgroundColorInExport;
    MSColor *_backgroundColor;
    MSSimpleGrid *_grid;
    MSRulerData *_horizontalRulerData;
    MSLayoutGrid *_layout;
    MSRulerData *_verticalRulerData;
}

@property(retain, nonatomic) MSRulerData *verticalRulerData; // @synthesize verticalRulerData=_verticalRulerData;
@property(retain, nonatomic) MSLayoutGrid *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MSRulerData *horizontalRulerData; // @synthesize horizontalRulerData=_horizontalRulerData;
@property(retain, nonatomic) MSSimpleGrid *grid; // @synthesize grid=_grid;
@property(retain, nonatomic) MSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL includeBackgroundColorInExport; // @synthesize includeBackgroundColorInExport=_includeBackgroundColorInExport;
@property(nonatomic) BOOL hasBackgroundColor; // @synthesize hasBackgroundColor=_hasBackgroundColor;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveVerticalRulerData:(id)arg1;
- (id)primitiveVerticalRulerData;
- (void)setPrimitiveLayout:(id)arg1;
- (id)primitiveLayout;
- (void)setPrimitiveHorizontalRulerData:(id)arg1;
- (id)primitiveHorizontalRulerData;
- (void)setPrimitiveGrid:(id)arg1;
- (id)primitiveGrid;
- (void)setPrimitiveBackgroundColor:(id)arg1;
- (id)primitiveBackgroundColor;
- (void)setPrimitiveIncludeBackgroundColorInExport:(BOOL)arg1;
- (BOOL)primitiveIncludeBackgroundColorInExport;
- (void)setPrimitiveHasBackgroundColor:(BOOL)arg1;
- (BOOL)primitiveHasBackgroundColor;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

