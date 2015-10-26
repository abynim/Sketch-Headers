#import "MSImmutableLayerGroup.h"

@class MSImmutableLayoutGrid, MSImmutableRulerData, MSImmutableSimpleGrid;

@interface _MSImmutablePage : MSImmutableLayerGroup
{
    struct CGPoint _scrollOrigin;
    double _zoomValue;
    MSImmutableSimpleGrid *_grid;
    MSImmutableRulerData *_horizontalRulerData;
    MSImmutableLayoutGrid *_layout;
    MSImmutableRulerData *_verticalRulerData;
}

@property(retain, nonatomic) MSImmutableRulerData *verticalRulerData; // @synthesize verticalRulerData=_verticalRulerData;
@property(retain, nonatomic) MSImmutableLayoutGrid *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MSImmutableRulerData *horizontalRulerData; // @synthesize horizontalRulerData=_horizontalRulerData;
@property(retain, nonatomic) MSImmutableSimpleGrid *grid; // @synthesize grid=_grid;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

