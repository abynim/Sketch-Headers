#import "MSImmutableModelBase.h"

@class MSImmutableArray;

@interface _MSImmutableShapePath : MSImmutableModelBase
{
    BOOL _isClosed;
    MSImmutableArray *_points;
}

@property(retain, nonatomic) MSImmutableArray *points; // @synthesize points=_points;
@property(nonatomic) BOOL isClosed; // @synthesize isClosed=_isClosed;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

