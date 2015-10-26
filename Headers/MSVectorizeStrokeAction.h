#import "MSBaseAction.h"

@interface MSVectorizeStrokeAction : MSBaseAction
{
}

- (id)imageName;
- (BOOL)validate;
- (void)transferStylePropertiesFromShape:(id)arg1 toVectorizedShape:(id)arg2;
- (id)outlinedPathForShape:(id)arg1;
- (void)vectorizeStrokeForShape:(id)arg1;
- (void)doPerformAction:(id)arg1;
- (void)vectorizeStroke:(id)arg1;

@end

