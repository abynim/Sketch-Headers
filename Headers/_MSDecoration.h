#import "MSModelObject.h"

@class NSBezierPath;

@interface _MSDecoration : MSModelObject
{
    NSBezierPath *_decoration;
    double _positionOnPath;
}

@property(nonatomic) double positionOnPath; // @synthesize positionOnPath=_positionOnPath;
@property(copy, nonatomic) NSBezierPath *decoration; // @synthesize decoration=_decoration;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitivePositionOnPath:(double)arg1;
- (double)primitivePositionOnPath;
- (void)setPrimitiveDecoration:(id)arg1;
- (id)primitiveDecoration;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

