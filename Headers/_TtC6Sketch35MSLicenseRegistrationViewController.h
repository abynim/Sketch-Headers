//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSAttributedString, NSButton, NSImage, NSStackView, NSString, NSTextField;
@protocol _TtP6Sketch35MSRegistrationWindowContentDelegate_;

@interface _TtC6Sketch35MSLicenseRegistrationViewController : NSViewController
{
    // Error parsing type: , name: headerTitle
    // Error parsing type: , name: headerDescription
    // Error parsing type: , name: headerLinkTitle
    // Error parsing type: , name: headerImage
    // Error parsing type: , name: allowCancellation
    // Error parsing type: , name: wantsLicense
    // Error parsing type: , name: licenseUpdateExpirationDate
    // Error parsing type: , name: delegate
    // Error parsing type: , name: stackView
    // Error parsing type: , name: licenseForm
    // Error parsing type: , name: licenseField
    // Error parsing type: , name: helpField
    // Error parsing type: , name: helpButton
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: actionButton
    // Error parsing type: , name: footerView
    // Error parsing type: , name: manageLicenseButton
    // Error parsing type: , name: downloadButton
    // Error parsing type: , name: licenseKey
}

+ (id)storyboardIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)cancel:(id)arg1;
- (void)finish:(id)arg1;
- (void)register:(id)arg1;
- (void)downloadSupportedSketchVersion:(id)arg1;
- (void)openHelpURL:(id)arg1;
- (void)visitLicenseManager:(id)arg1;
- (void)visitStoreForRenewal:(id)arg1;
- (void)registrationWindowDidClickHeaderLink:(id)arg1;
- (void)viewWillAppear;
@property(nonatomic, copy) NSString *licenseKey;
@property(nonatomic, retain) NSButton *downloadButton; // @synthesize downloadButton;
@property(nonatomic, retain) NSButton *manageLicenseButton; // @synthesize manageLicenseButton;
@property(nonatomic, retain) NSStackView *footerView; // @synthesize footerView;
@property(nonatomic, retain) NSButton *actionButton; // @synthesize actionButton;
@property(nonatomic, retain) NSButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic, retain) NSButton *helpButton; // @synthesize helpButton;
@property(nonatomic, retain) NSTextField *helpField; // @synthesize helpField;
@property(nonatomic, retain) NSTextField *licenseField; // @synthesize licenseField;
@property(nonatomic, retain) NSStackView *licenseForm; // @synthesize licenseForm;
@property(nonatomic, retain) NSStackView *stackView; // @synthesize stackView;
@property(nonatomic) __weak id <_TtP6Sketch35MSRegistrationWindowContentDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, readonly) BOOL wantsLicense; // @synthesize wantsLicense;
@property(nonatomic) BOOL allowCancellation; // @synthesize allowCancellation;
@property(nonatomic, readonly) NSImage *headerImage; // @synthesize headerImage;
@property(nonatomic, readonly) NSString *headerLinkTitle;
@property(nonatomic, retain) NSAttributedString *headerDescription; // @synthesize headerDescription;
@property(nonatomic, retain) NSAttributedString *headerTitle; // @synthesize headerTitle;

@end

