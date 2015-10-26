#import "MSBaseAction.h"

@interface MSVectorizeTextAction : MSBaseAction
{
}

- (BOOL)validate;
- (id)imageName;
- (id)label;
- (void)refreshAndRemoveOldLayer:(id)arg1;
- (void)copyStylePropertiesFromLayer:(id)arg1 toShape:(id)arg2;
- (id)rawCopyOfStyle:(id)arg1;
- (void)copyTextPropertiesFromLayer:(id)arg1 toShape:(id)arg2;
- (void)insertAndSelectShape:(id)arg1 inGroup:(id)arg2;
- (void)doPerformAction:(id)arg1;
- (void)vectorizeLayer:(id)arg1;

@end

