//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSLinkButton, NSSecureTextField, NSStackView, NSTextField;

@interface _TtC6Sketch36MSCloudCredentialsFormViewController : NSViewController
{
    // Error parsing type: , name: _state
    // Error parsing type: , name: events
    // Error parsing type: , name: emailField
    // Error parsing type: , name: emailFieldContainer
    // Error parsing type: , name: passwordField
    // Error parsing type: , name: passwordFieldContainer
    // Error parsing type: , name: forgotPasswordButton
    // Error parsing type: , name: emailSuccessField
    // Error parsing type: , name: passwordSuccessField
    // Error parsing type: , name: shouldRenderFocusOnAppear
    // Error parsing type: , name: renderedState
    // Error parsing type: , name: cancellables
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)forgotPassword:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
@property(nonatomic, retain) MSLinkButton *forgotPasswordButton; // @synthesize forgotPasswordButton;
@property(nonatomic) __weak NSStackView *passwordFieldContainer; // @synthesize passwordFieldContainer;
@property(nonatomic, retain) NSSecureTextField *passwordField; // @synthesize passwordField;
@property(nonatomic) __weak NSStackView *emailFieldContainer; // @synthesize emailFieldContainer;
@property(nonatomic, retain) NSTextField *emailField; // @synthesize emailField;

@end

