//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSPopUpButton, NSString, NSTextField, _TtC6Sketch29MSFontEmbeddingViewController;

@interface _TtC6Sketch27MSReplaceFontViewController : NSViewController
{
    // Error parsing type: , name: headerLabel
    // Error parsing type: , name: fontFamilyButton
    // Error parsing type: , name: fontWeightButton
    // Error parsing type: , name: replaceButton
    // Error parsing type: , name: fontEmbeddingViewController
    // Error parsing type: , name: row
    // Error parsing type: , name: missingFontIdentifier
    // Error parsing type: , name: font
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)chooseFontWeightWith_sender:(id)arg1;
- (void)fontFamilyActionWith_sender:(id)arg1;
- (void)replaceWith_sender:(id)arg1;
- (void)viewWillAppear;
@property(nonatomic, copy) NSString *missingFontIdentifier;
@property(nonatomic) long long row; // @synthesize row;
@property(nonatomic, retain) _TtC6Sketch29MSFontEmbeddingViewController *fontEmbeddingViewController; // @synthesize fontEmbeddingViewController;
@property(nonatomic, retain) NSButton *replaceButton; // @synthesize replaceButton;
@property(nonatomic, retain) NSPopUpButton *fontWeightButton; // @synthesize fontWeightButton;
@property(nonatomic, retain) NSButton *fontFamilyButton; // @synthesize fontFamilyButton;
@property(nonatomic, retain) NSTextField *headerLabel; // @synthesize headerLabel;

@end

