//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDocumentAction.h"

@class NSString;

@interface MSZoomAction : MSDocumentAction
{
}

- (id)historyMomentTitle;
- (id)label;
@property(readonly, copy) NSString *zoomValueString;
- (void)zoomValueDidChange;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)handlesKeyEvent:(id)arg1;
- (void)doPerformAction:(id)arg1;
- (void)zoomTo400Action:(id)arg1;
- (void)zoomTo200Action:(id)arg1;
- (void)zoomTo50Action:(id)arg1;
- (void)zoomTo25Action:(id)arg1;
- (id)findZoomPopupButton;
- (BOOL)validate;
- (void)menuDidClose:(id)arg1;
- (id)menu;
- (BOOL)hasSubMenu;
- (id)makeToolbarItemForToolbar:(BOOL)arg1;
- (id)zoomPopupButtonWithFrame:(struct CGRect)arg1;
- (id)zoomButtonWithAction:(id)arg1 imageNamed:(id)arg2;

@end

