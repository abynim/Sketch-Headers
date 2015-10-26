#import "MSModelObject.h"

@interface _MSCurvePoint : MSModelObject
{
    BOOL _hasCurveFrom;
    BOOL _hasCurveTo;
    double _cornerRadius;
    long long _curveMode;
    struct CGPoint _curveFrom;
    struct CGPoint _curveTo;
    struct CGPoint _point;
}

@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) BOOL hasCurveTo; // @synthesize hasCurveTo=_hasCurveTo;
@property(nonatomic) BOOL hasCurveFrom; // @synthesize hasCurveFrom=_hasCurveFrom;
@property(nonatomic) struct CGPoint curveTo; // @synthesize curveTo=_curveTo;
@property(nonatomic) long long curveMode; // @synthesize curveMode=_curveMode;
@property(nonatomic) struct CGPoint curveFrom; // @synthesize curveFrom=_curveFrom;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitivePoint:(struct CGPoint)arg1;
- (struct CGPoint)primitivePoint;
- (void)setPrimitiveHasCurveTo:(BOOL)arg1;
- (BOOL)primitiveHasCurveTo;
- (void)setPrimitiveHasCurveFrom:(BOOL)arg1;
- (BOOL)primitiveHasCurveFrom;
- (void)setPrimitiveCurveTo:(struct CGPoint)arg1;
- (struct CGPoint)primitiveCurveTo;
- (void)setPrimitiveCurveMode:(long long)arg1;
- (long long)primitiveCurveMode;
- (void)setPrimitiveCurveFrom:(struct CGPoint)arg1;
- (struct CGPoint)primitiveCurveFrom;
- (void)setPrimitiveCornerRadius:(double)arg1;
- (double)primitiveCornerRadius;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

