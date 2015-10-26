#import "MSBaseAction.h"

@interface MSFlattenAction : MSBaseAction
{
}

- (id)tooltip;
- (void)flattenShape:(id)arg1;
- (BOOL)shouldWarnAboutFlattening;
- (void)flattenIgnoringWarning;
- (void)doFlatten;
- (void)doPerformAction:(id)arg1;
- (void)flatten:(id)arg1;
- (BOOL)validate;

@end

