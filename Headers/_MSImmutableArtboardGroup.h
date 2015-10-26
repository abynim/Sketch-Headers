#import "MSImmutableLayerGroup.h"

@class MSImmutableColor, MSImmutableLayoutGrid, MSImmutableRulerData, MSImmutableSimpleGrid;

@interface _MSImmutableArtboardGroup : MSImmutableLayerGroup
{
    BOOL _hasBackgroundColor;
    BOOL _includeBackgroundColorInExport;
    MSImmutableColor *_backgroundColor;
    MSImmutableSimpleGrid *_grid;
    MSImmutableRulerData *_horizontalRulerData;
    MSImmutableLayoutGrid *_layout;
    MSImmutableRulerData *_verticalRulerData;
}

@property(retain, nonatomic) MSImmutableRulerData *verticalRulerData; // @synthesize verticalRulerData=_verticalRulerData;
@property(retain, nonatomic) MSImmutableLayoutGrid *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MSImmutableRulerData *horizontalRulerData; // @synthesize horizontalRulerData=_horizontalRulerData;
@property(retain, nonatomic) MSImmutableSimpleGrid *grid; // @synthesize grid=_grid;
@property(retain, nonatomic) MSImmutableColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL includeBackgroundColorInExport; // @synthesize includeBackgroundColorInExport=_includeBackgroundColorInExport;
@property(nonatomic) BOOL hasBackgroundColor; // @synthesize hasBackgroundColor=_hasBackgroundColor;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

