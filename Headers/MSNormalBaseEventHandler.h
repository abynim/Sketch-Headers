#import "MSEventHandler.h"

@interface MSNormalBaseEventHandler : MSEventHandler
{
}

- (void)resizeParentsOfSelectedLayersToFit;
- (BOOL)canDuplicate;
- (id)cursorForCorner:(long long)arg1 transformStruct:(struct _CHTransformStruct)arg2;

@end

