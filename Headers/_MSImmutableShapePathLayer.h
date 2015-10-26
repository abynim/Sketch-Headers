#import "MSImmutableLayer.h"

@class MSImmutableShapePath;

@interface _MSImmutableShapePathLayer : MSImmutableLayer
{
    long long _booleanOperation;
    BOOL _edited;
    MSImmutableShapePath *_path;
}

@property(retain, nonatomic) MSImmutableShapePath *path; // @synthesize path=_path;
@property(nonatomic) BOOL edited; // @synthesize edited=_edited;
@property(nonatomic) long long booleanOperation; // @synthesize booleanOperation=_booleanOperation;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

