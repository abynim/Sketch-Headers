#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class NSImageView, NSString, NSTextField, NSTimer;

@interface MSArtboardPreviewWindowController : NSWindowController <NSWindowDelegate>
{
    NSImageView *_previewView;
    NSTextField *_noArtboardField;
    NSTimer *_refreshTimer;
}

+ (id)sharedController;
+ (BOOL)hasSharedController;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(nonatomic) __weak NSTextField *noArtboardField; // @synthesize noArtboardField=_noArtboardField;
@property(nonatomic) __weak NSImageView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)currentDocument;
- (id)currentArtboard;
- (struct CGRect)fitRectOnScreen:(struct CGRect)arg1;
- (void)setWindowSize:(struct CGSize)arg1;
- (id)artboardSlice;
- (BOOL)isOnRetina;
- (void)generatePreviewWithCallback:(CDUnknownBlockType)arg1;
- (struct CGSize)windowSizeForImage:(id)arg1;
- (void)loadPreview;
- (void)displayCurrentArtboardPreview;
- (void)refreshTimerAction:(id)arg1;
- (void)scheduleTimer;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

