//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Sketch34ComponentPaneOutlineViewController.h"

@class NSButton, NSLayoutConstraint, NSSegmentedControl, NSTextField;

@interface _TtC6Sketch23ComponentListController : _TtC6Sketch34ComponentPaneOutlineViewController
{
    // Error parsing type: , name: componentKindSegmentedControl
    // Error parsing type: , name: componentKindLabel
    // Error parsing type: , name: treeStructureButton
    // Error parsing type: , name: treeStructureLabel
    // Error parsing type: , name: noComponentsToShowTextField
    // Error parsing type: , name: heightConstraint
    // Error parsing type: , name: delegate
    // Error parsing type: , name: currentlyPreviewedViewItem
    // Error parsing type: , name: selectionToPersist
    // Error parsing type: , name: $__lazy_storage_$_previewImageCache
    // Error parsing type: , name: navigationTree
    // Error parsing type: , name: searchResultTree
    // Error parsing type: , name: componentKind
    // Error parsing type: , name: useCase
    // Error parsing type: , name: filterSetting
    // Error parsing type: , name: parentModelPathToFocusOn
    // Error parsing type: , name: deferringHeightChangeNotifications
    // Error parsing type: , name: shouldScrollSelectionToVisible
    // Error parsing type: , name: cachedRowViewRenderer
    // Error parsing type: , name: skipNotifyingDelegateAboutSelectionChange
    // Error parsing type: , name: expandingItem
    // Error parsing type: , name: collapsingItem
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear;
- (void)viewDidLoad;
@property(nonatomic, retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint;
@property(nonatomic) __weak NSTextField *noComponentsToShowTextField; // @synthesize noComponentsToShowTextField;
@property(nonatomic) __weak NSTextField *treeStructureLabel; // @synthesize treeStructureLabel;
@property(nonatomic) __weak NSButton *treeStructureButton; // @synthesize treeStructureButton;
@property(nonatomic) __weak NSTextField *componentKindLabel; // @synthesize componentKindLabel;
@property(nonatomic) __weak NSSegmentedControl *componentKindSegmentedControl; // @synthesize componentKindSegmentedControl;

@end

