#import "NSWindowController.h"

@class NSScrollView, NSTextField, NSTextView, NSView;

@interface MSReleaseNotesWindowController : NSWindowController
{
    NSScrollView *_releaseNotesScroller;
    NSTextView *_releaseNotesField;
    NSTextField *_titleField;
    NSView *_prereleaseWarning;
}

@property(retain, nonatomic) NSView *prereleaseWarning; // @synthesize prereleaseWarning=_prereleaseWarning;
@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain, nonatomic) NSTextView *releaseNotesField; // @synthesize releaseNotesField=_releaseNotesField;
@property(retain, nonatomic) NSScrollView *releaseNotesScroller; // @synthesize releaseNotesScroller=_releaseNotesScroller;
- (void).cxx_destruct;
- (void)close:(id)arg1;
- (void)updatePrereleaseWarning;
- (void)updateReleaseNotesField;
- (void)updateTitleToVersionNumber;
- (void)windowDidLoad;
- (id)init;

@end

