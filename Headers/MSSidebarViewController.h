#import "CHViewController.h"

#import "NSSplitViewDelegate.h"

@class MSDocument, MSLayerListViewController, MSPagesListViewController, NSString;

@interface MSSidebarViewController : CHViewController <NSSplitViewDelegate>
{
    MSLayerListViewController *_layersViewController;
    MSPagesListViewController *_pagesViewController;
}

@property(retain, nonatomic) MSPagesListViewController *pagesViewController; // @synthesize pagesViewController=_pagesViewController;
@property(retain, nonatomic) MSLayerListViewController *layersViewController; // @synthesize layersViewController=_layersViewController;
- (void).cxx_destruct;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
@property(retain, nonatomic) MSDocument *document; // @dynamic document;
- (void)resizePagesPanelToFit;
- (void)togglePagesPanel;
- (void)prepareForRemoval;
- (void)prepareForDisplay;
- (void)reloadData;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

