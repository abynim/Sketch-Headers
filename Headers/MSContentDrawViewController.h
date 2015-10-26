#import "CHViewController.h"

#import "MSBaseViewDelegate.h"

@class MSContentDrawView, MSDocument, MSRulerView, NSString, NSView;

@interface MSContentDrawViewController : CHViewController <MSBaseViewDelegate>
{
    MSContentDrawView *_contentDrawView;
    MSRulerView *_horizontalRuler;
    MSRulerView *_verticalRuler;
    NSView *_rulerCornerView;
    MSDocument *_document;
}

@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) NSView *rulerCornerView; // @synthesize rulerCornerView=_rulerCornerView;
@property(retain, nonatomic) MSRulerView *verticalRuler; // @synthesize verticalRuler=_verticalRuler;
@property(retain, nonatomic) MSRulerView *horizontalRuler; // @synthesize horizontalRuler=_horizontalRuler;
@property(retain, nonatomic) MSContentDrawView *contentDrawView; // @synthesize contentDrawView=_contentDrawView;
- (void).cxx_destruct;
- (void)prepareForDealloc;
- (void)toggleRulers;
- (void)changeToPage:(id)arg1;
- (void)currentArtboardDidChange;
@property(nonatomic) double zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

