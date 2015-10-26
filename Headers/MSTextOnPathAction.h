#import "MSBaseAction.h"

@interface MSTextOnPathAction : MSBaseAction
{
}

- (id)textLayers;
- (BOOL)validate;
- (BOOL)isActive;
- (void)doPerformAction:(id)arg1;
- (void)textOnPath:(id)arg1;

@end

