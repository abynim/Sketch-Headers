#import "MSModelBase.h"

@class MSArray;

@interface _MSShapePath : MSModelBase
{
    BOOL _isClosed;
    MSArray *_points;
}

@property(retain, nonatomic) MSArray *points; // @synthesize points=_points;
@property(nonatomic) BOOL isClosed; // @synthesize isClosed=_isClosed;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitivePoints:(id)arg1;
- (id)primitivePoints;
- (void)setPrimitiveIsClosed:(BOOL)arg1;
- (BOOL)primitiveIsClosed;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

