#import "NSViewController.h"

@class NSButton, NSMutableDictionary, NSTextField;

@interface MSEditArtboardPresetViewController : NSViewController
{
    BOOL _canCancel;
    NSMutableDictionary *_preset;
    CDUnknownBlockType _completionBlock;
    NSTextField *_nameField;
    NSButton *_cancelButton;
    CDUnknownBlockType _cancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) BOOL canCancel; // @synthesize canCancel=_canCancel;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSTextField *nameField; // @synthesize nameField=_nameField;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSMutableDictionary *preset; // @synthesize preset=_preset;
- (void).cxx_destruct;
- (void)close;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (void)awakeFromNib;
- (id)init;

@end

