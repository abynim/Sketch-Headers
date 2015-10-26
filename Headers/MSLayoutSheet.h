#import "CHSheetController.h"

#import "NSWindowDelegate.h"

@class MSLayoutGrid, NSButton, NSString;

@interface MSLayoutSheet : CHSheetController <NSWindowDelegate>
{
    NSButton *_centerGridButton;
    MSLayoutGrid *_originalLayout;
    MSLayoutGrid *_layout;
}

@property(retain, nonatomic) MSLayoutGrid *layout; // @synthesize layout=_layout;
@property(copy, nonatomic) MSLayoutGrid *originalLayout; // @synthesize originalLayout=_originalLayout;
@property(retain, nonatomic) NSButton *centerGridButton; // @synthesize centerGridButton=_centerGridButton;
- (void).cxx_destruct;
- (void)centerGridInArtboard;
- (void)centerGrid:(id)arg1;
- (void)gridChanged:(id)arg1;
- (void)setAsDefault:(id)arg1;
- (void)confirm:(id)arg1;
- (void)refreshView;
- (void)refreshCanvas:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

