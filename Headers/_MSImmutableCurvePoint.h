#import "MSImmutableModelBase.h"

@interface _MSImmutableCurvePoint : MSImmutableModelBase
{
    double _cornerRadius;
    struct CGPoint _curveFrom;
    long long _curveMode;
    struct CGPoint _curveTo;
    BOOL _hasCurveFrom;
    BOOL _hasCurveTo;
    struct CGPoint _point;
}

@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) BOOL hasCurveTo; // @synthesize hasCurveTo=_hasCurveTo;
@property(nonatomic) BOOL hasCurveFrom; // @synthesize hasCurveFrom=_hasCurveFrom;
@property(nonatomic) struct CGPoint curveTo; // @synthesize curveTo=_curveTo;
@property(nonatomic) long long curveMode; // @synthesize curveMode=_curveMode;
@property(nonatomic) struct CGPoint curveFrom; // @synthesize curveFrom=_curveFrom;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

