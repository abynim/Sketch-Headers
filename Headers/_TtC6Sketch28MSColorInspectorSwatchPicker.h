//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSColor, MSInspectorButton, MSInspectorPopoverButton, MSSwatch;
@protocol _TtP6Sketch22MSSwatchPickerDelegate_;

@interface _TtC6Sketch28MSColorInspectorSwatchPicker : NSViewController
{
    // Error parsing type: , name: document
    // Error parsing type: , name: delegate
    // Error parsing type: , name: color
    // Error parsing type: , name: indicateMultipleSelection
    // Error parsing type: , name: popoverButton
    // Error parsing type: , name: detachButton
    // Error parsing type: , name: addButton
}

+ (id)presetPickerVisibilityDefaultsKey;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)createSwatchAction:(id)arg1;
- (void)detachAction:(id)arg1;
- (void)showPicker:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocument:(id)arg1;
@property(nonatomic, retain) MSInspectorButton *addButton; // @synthesize addButton;
@property(nonatomic, retain) MSInspectorButton *detachButton; // @synthesize detachButton;
@property(nonatomic, retain) MSInspectorPopoverButton *popoverButton; // @synthesize popoverButton;
@property(nonatomic, readonly) MSSwatch *swatch;
@property(nonatomic) BOOL indicateMultipleSelection; // @synthesize indicateMultipleSelection;
@property(nonatomic, retain) MSColor *color; // @synthesize color;
@property(nonatomic, retain) id <_TtP6Sketch22MSSwatchPickerDelegate_> delegate; // @synthesize delegate;

@end

