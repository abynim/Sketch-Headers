//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Sketch22ComponentInspectorItem.h"

@class MSInspectorPushButton, NSMenu, NSTextField;

@interface _TtC6Sketch24SharedStyleInspectorItem : _TtC6Sketch22ComponentInspectorItem
{
    // Error parsing type: , name: renameTextField
    // Error parsing type: , name: createStyleButton
    // Error parsing type: , name: updateStyleButton
    // Error parsing type: , name: detachStyleButton
    // Error parsing type: , name: moreActionsButton
    // Error parsing type: , name: moreActionsMenu
    // Error parsing type: , name: renameCompletionHandler
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)commitStyleName:(id)arg1;
- (void)renameStyleWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshIfNecessary:(id)arg1;
- (void)showMoreActionsMenu:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSMenu *moreActionsMenu; // @synthesize moreActionsMenu;
@property(nonatomic) __weak MSInspectorPushButton *moreActionsButton; // @synthesize moreActionsButton;
@property(nonatomic) __weak MSInspectorPushButton *detachStyleButton; // @synthesize detachStyleButton;
@property(nonatomic) __weak MSInspectorPushButton *updateStyleButton; // @synthesize updateStyleButton;
@property(nonatomic) __weak MSInspectorPushButton *createStyleButton; // @synthesize createStyleButton;
@property(nonatomic) __weak NSTextField *renameTextField; // @synthesize renameTextField;

@end

