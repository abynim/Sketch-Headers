#import "CHSheetController.h"

@interface MSFlattenWarningSheet : CHSheetController
{
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)confirm:(id)arg1;

@end

