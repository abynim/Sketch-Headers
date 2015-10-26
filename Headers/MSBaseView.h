#import "NSView.h"

@class MSEventHandlerManager;

@interface MSBaseView : NSView
{
    id <MSBaseViewDelegate> _delegate;
    MSEventHandlerManager *_eventHandlerManager;
}

@property(retain, nonatomic) MSEventHandlerManager *eventHandlerManager; // @synthesize eventHandlerManager=_eventHandlerManager;
@property(nonatomic) __weak id <MSBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setViewPort:(id)arg1;
- (id)viewPort;
- (void)setOutletsToNil;
- (void)didUndoNotification:(id)arg1;
- (void)willUndoNotification:(id)arg1;
- (void)userDefaultsDidChange:(id)arg1;
@property(nonatomic) struct CGPoint scrollOrigin; // @dynamic scrollOrigin;
@property(nonatomic) double zoomValue; // @dynamic zoomValue;
- (BOOL)isFlipped;
- (void)initialize;
- (void)dealloc;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

