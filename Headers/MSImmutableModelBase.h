#import "MSModelObject.h"

@interface MSImmutableModelBase : MSModelObject
{
}

- (void)objectDidInit;
- (void)initEmptyObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithMutableModelObject:(id)arg1;

@end

