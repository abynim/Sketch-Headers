#import "CHInputSheet.h"

@interface MSInputSheet : CHInputSheet
{
    CDUnknownBlockType _inputCompletionBlock;
}

+ (id)runWithTitle:(id)arg1 subtitle:(id)arg2 fieldTitle:(id)arg3 defaultValue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) CDUnknownBlockType inputCompletionBlock; // @synthesize inputCompletionBlock=_inputCompletionBlock;
- (void).cxx_destruct;
- (void)confirm:(id)arg1;

@end

