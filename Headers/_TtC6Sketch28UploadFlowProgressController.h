//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSImageView, NSProgressIndicator, NSStackView, NSTextField;

@interface _TtC6Sketch28UploadFlowProgressController : NSViewController
{
    // Error parsing type: , name: progressIndicator
    // Error parsing type: , name: imageView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: progressStackView
    // Error parsing type: , name: menuButton
    // Error parsing type: , name: progress
    // Error parsing type: , name: cancelConfiguration
    // Error parsing type: , name: rateLimiter
    // Error parsing type: , name: observation
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateProgress:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) NSButton *menuButton; // @synthesize menuButton;
@property(nonatomic, retain) NSStackView *progressStackView; // @synthesize progressStackView;
@property(nonatomic, retain) NSButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic, retain) NSTextField *descriptionLabel; // @synthesize descriptionLabel;
@property(nonatomic, retain) NSTextField *titleLabel; // @synthesize titleLabel;
@property(nonatomic, retain) NSImageView *imageView; // @synthesize imageView;
@property(nonatomic, retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;

@end
