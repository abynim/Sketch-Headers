#import "MSBaseAction.h"

@class NSWindow;

@interface MSTogglePresentationModeAction : MSBaseAction
{
    NSWindow *_fullScreenWindow;
}

@property(retain, nonatomic) NSWindow *fullScreenWindow; // @synthesize fullScreenWindow=_fullScreenWindow;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeObserver;
- (id)fullScreenOptions;
- (id)fullScreenView;
- (void)fullScreenWindowDidResignMain:(id)arg1;
- (struct CGRect)rectOfCanvasOnScreen;
- (void)enterFullScreen;
- (void)exitFullScreen;
- (void)togglePresentationMode:(id)arg1;

@end

