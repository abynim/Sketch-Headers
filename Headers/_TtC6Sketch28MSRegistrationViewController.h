//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTabViewDelegate-Protocol.h"

@class MSLinkButton, NSImageView, NSTextField, NSView, NSVisualEffectView;

@interface _TtC6Sketch28MSRegistrationViewController : NSViewController <NSTabViewDelegate>
{
    // Error parsing type: , name: backgroundEffectView
    // Error parsing type: , name: imageView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: linkButton
    // Error parsing type: , name: successImageView
    // Error parsing type: , name: contentContainerView
    // Error parsing type: , name: currentBadgeDecorationView
    // Error parsing type: , name: delegate
    // Error parsing type: , name: contentViewController
    // Error parsing type: , name: registrationType
    // Error parsing type: , name: allowCancellation
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)showRegistrationOptions:(id)arg1;
- (void)showLicenseView:(id)arg1;
- (void)showSignInView:(id)arg1;
- (void)updateRegistrationHeader:(id)arg1;
- (void)didFailRegistration:(id)arg1;
- (void)didSucceedRegistration:(id)arg1;
- (void)dismissRegistration:(id)arg1;
- (void)openMore:(id)arg1;
- (void)viewWillAppear;
@property(nonatomic, retain) NSView *contentContainerView; // @synthesize contentContainerView;
@property(nonatomic, retain) NSImageView *successImageView; // @synthesize successImageView;
@property(nonatomic, retain) MSLinkButton *linkButton; // @synthesize linkButton;
@property(nonatomic, retain) NSTextField *descriptionLabel; // @synthesize descriptionLabel;
@property(nonatomic, retain) NSTextField *titleLabel; // @synthesize titleLabel;
@property(nonatomic, retain) NSImageView *imageView; // @synthesize imageView;
@property(nonatomic, retain) NSVisualEffectView *backgroundEffectView; // @synthesize backgroundEffectView;

@end

