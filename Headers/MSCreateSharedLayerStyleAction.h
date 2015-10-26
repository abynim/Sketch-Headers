#import "MSBaseAction.h"

@interface MSCreateSharedLayerStyleAction : MSBaseAction
{
}

- (id)firstLayer;
- (id)toolbarLabel;
- (id)imageName;
- (id)label;
- (id)sharedObjectContainer;
- (struct MSModelObject *)sharedObjectInstance;
- (id)displayNameForNewSharedObject;
- (BOOL)validate;
- (void)createSharedObjectFromSelectedLayer;
- (void)doPerformAction:(id)arg1;
- (void)createSharedLayerStyle:(id)arg1;

@end

