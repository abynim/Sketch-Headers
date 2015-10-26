#import "MSBaseAction.h"

@interface MSCreateSharedLayerStyleAction : MSBaseAction
{
}

- (id)toolbarLabel;
- (id)imageName;
- (id)label;
- (id)sharedObjectContainer;
- (struct MSModelObject *)sharedObjectInstance;
- (id)displayNameForNewSharedObject;
- (BOOL)hasRawGroups;
- (BOOL)validate;
- (void)doPerformAction:(id)arg1;
- (void)createSharedLayerStyle:(id)arg1;
- (id)firstLayer;
- (void)createSharedObjectFromSelectedLayer;

@end

