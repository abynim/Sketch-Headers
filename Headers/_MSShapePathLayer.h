#import "MSLayer.h"

@class MSShapePath;

@interface _MSShapePathLayer : MSLayer
{
    BOOL _edited;
    long long _booleanOperation;
    MSShapePath *_path;
}

@property(retain, nonatomic) MSShapePath *path; // @synthesize path=_path;
@property(nonatomic) BOOL edited; // @synthesize edited=_edited;
@property(nonatomic) long long booleanOperation; // @synthesize booleanOperation=_booleanOperation;
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
- (void)setPrimitivePath:(id)arg1;
- (id)primitivePath;
- (void)setPrimitiveEdited:(BOOL)arg1;
- (BOOL)primitiveEdited;
- (void)setPrimitiveBooleanOperation:(long long)arg1;
- (long long)primitiveBooleanOperation;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

