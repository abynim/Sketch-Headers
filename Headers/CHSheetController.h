#import "NSWindowController.h"

@interface CHSheetController : NSWindowController
{
    id _object;
    id _delegate;
}

+ (id)runForWindow:(id)arg1 withObject:(id)arg2 delegate:(id)arg3;
+ (id)runForWindow:(id)arg1 withObject:(id)arg2;
+ (id)runForWindow:(id)arg1;
+ (id)runWithObject:(id)arg1;
+ (id)run;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)_sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)dealloc;
- (id)_init;
- (id)windowNibName;
- (void)closeSheet;
- (void)cancel:(id)arg1;
- (void)confirm:(id)arg1;

@end

