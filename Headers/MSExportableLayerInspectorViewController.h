#import "CHViewController.h"

#import "BCPopoverDelegate.h"
#import "MSColorInspectorDelegate.h"
#import "MSInspectorChildController.h"
#import "MSSectionProtocol.h"
#import "MSSliceLayerWatcher.h"

@class BCPopover, MSColorPreviewButton, MSFlippedView, MSInspectorStackView, MSOldStyleSliceViewDataSource, NSArray, NSButton, NSButtonCell, NSMatrix, NSMutableArray, NSString, NSTableView, NSTextField, NSTimer, NSView;

@interface MSExportableLayerInspectorViewController : CHViewController <MSSectionProtocol, MSInspectorChildController, MSSliceLayerWatcher, MSColorInspectorDelegate, BCPopoverDelegate>
{
    MSInspectorStackView *_stackView;
    NSView *_currentStyleSliceTopView;
    NSView *_oldStyleSliceTopView;
    NSView *_addMoreSizesView;
    NSView *_standardPropertiesView;
    NSView *_artboardBackgroundView;
    NSView *_sliceBackgroundView;
    NSTableView *_oldSliceIncludedTable;
    NSMatrix *_oldStyleIncludeMatrix;
    NSButtonCell *_oldSliceIncludeAll;
    NSButtonCell *_oldSliceIncludeFollowing;
    NSButtonCell *_oldSliceIncludeGroup;
    NSButton *_groupContentsOnlyButton;
    MSColorPreviewButton *_artboardBackgroundColorButton;
    MSColorPreviewButton *_sliceBackgroundColorButton;
    NSView *_topFillerView;
    NSView *_bottomLabelView;
    NSTextField *_formatLabel;
    NSArray *_layers;
    MSOldStyleSliceViewDataSource *_oldStyleDataSource;
    NSArray *_sizeViewControllers;
    BCPopover *_popover;
    NSTimer *_refreshTimer;
    NSMutableArray *_sliceViews;
    MSFlippedView *_sliceViewContainerView;
}

@property(retain, nonatomic) MSFlippedView *sliceViewContainerView; // @synthesize sliceViewContainerView=_sliceViewContainerView;
@property(retain, nonatomic) NSMutableArray *sliceViews; // @synthesize sliceViews=_sliceViews;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) NSArray *sizeViewControllers; // @synthesize sizeViewControllers=_sizeViewControllers;
@property(retain, nonatomic) MSOldStyleSliceViewDataSource *oldStyleDataSource; // @synthesize oldStyleDataSource=_oldStyleDataSource;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) NSTextField *formatLabel; // @synthesize formatLabel=_formatLabel;
@property(retain, nonatomic) NSView *bottomLabelView; // @synthesize bottomLabelView=_bottomLabelView;
@property(retain, nonatomic) NSView *topFillerView; // @synthesize topFillerView=_topFillerView;
@property(retain, nonatomic) MSColorPreviewButton *sliceBackgroundColorButton; // @synthesize sliceBackgroundColorButton=_sliceBackgroundColorButton;
@property(retain, nonatomic) MSColorPreviewButton *artboardBackgroundColorButton; // @synthesize artboardBackgroundColorButton=_artboardBackgroundColorButton;
@property(retain, nonatomic) NSButton *groupContentsOnlyButton; // @synthesize groupContentsOnlyButton=_groupContentsOnlyButton;
@property(retain, nonatomic) NSButtonCell *oldSliceIncludeGroup; // @synthesize oldSliceIncludeGroup=_oldSliceIncludeGroup;
@property(retain, nonatomic) NSButtonCell *oldSliceIncludeFollowing; // @synthesize oldSliceIncludeFollowing=_oldSliceIncludeFollowing;
@property(retain, nonatomic) NSButtonCell *oldSliceIncludeAll; // @synthesize oldSliceIncludeAll=_oldSliceIncludeAll;
@property(retain, nonatomic) NSMatrix *oldStyleIncludeMatrix; // @synthesize oldStyleIncludeMatrix=_oldStyleIncludeMatrix;
@property(retain, nonatomic) NSTableView *oldSliceIncludedTable; // @synthesize oldSliceIncludedTable=_oldSliceIncludedTable;
@property(retain, nonatomic) NSView *sliceBackgroundView; // @synthesize sliceBackgroundView=_sliceBackgroundView;
@property(retain, nonatomic) NSView *artboardBackgroundView; // @synthesize artboardBackgroundView=_artboardBackgroundView;
@property(retain, nonatomic) NSView *standardPropertiesView; // @synthesize standardPropertiesView=_standardPropertiesView;
@property(retain, nonatomic) NSView *addMoreSizesView; // @synthesize addMoreSizesView=_addMoreSizesView;
@property(retain, nonatomic) NSView *oldStyleSliceTopView; // @synthesize oldStyleSliceTopView=_oldStyleSliceTopView;
@property(retain, nonatomic) NSView *currentStyleSliceTopView; // @synthesize currentStyleSliceTopView=_currentStyleSliceTopView;
@property(retain, nonatomic) MSInspectorStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (BOOL)shouldHideExportBar;
- (void)refreshAction:(id)arg1;
- (id)document;
- (void)exportSingleSlice:(id)arg1;
- (void)addExportSizeAction:(id)arg1;
- (unsigned long long)selectedExportOptions:(id)arg1;
- (void)oldStyleIncludedRadioAction:(id)arg1;
- (BOOL)hasOldStyleSlices;
- (id)nibName;
- (id)viewControllers;
- (id)views;
- (BOOL)wantsSeparatorBetweenView:(id)arg1 andView:(id)arg2;
- (void)sizeSliceView;
- (void)reloadSlicesFromArray:(id)arg1;
- (void)loadSliceViews;
- (void)refreshTimerFired:(id)arg1;
- (void)scheduleSliceViewReload;
- (void)prepareForDisplay;
- (void)dealloc;
- (void)sliceLayerDidChange:(id)arg1;
- (void)selectionDidChangeTo:(id)arg1;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)viewControllerWillDisappear;
- (void)popoverWillClose:(id)arg1;
- (void)validateArtboardBackgroundButtons;
- (void)backgroundColorAction:(id)arg1;
- (void)prepareArtboardsForFill;
- (void)layerPositionPossiblyChanged;
- (void)artboardBackgroundCheckAction:(id)arg1;
- (void)groupContentsOnlyAction:(id)arg1;
- (void)exportableSizeDidChange:(id)arg1;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

