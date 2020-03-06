//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Chocolat/CHSheetController.h>

#import "NSDraggingDestination-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MSHeaderView, NSButton, NSImageView, NSPopUpButton, NSSegmentedControl, NSStackView, NSString, NSTextField, NSURL, NSView, SCKAPIOperation, SCKOrganization, SCKProject, SCKUser, _TtC6Sketch18MSRecentPlacesList;

@interface MSSaveSheet : CHSheetController <NSDraggingDestination, NSWindowDelegate>
{
    BOOL _allowDocumentDeletion;
    long long _destination;
    NSString *_documentName;
    NSURL *_directoryURL;
    _TtC6Sketch18MSRecentPlacesList *_recentPlaces;
    CDUnknownBlockType _completionHandler;
    MSHeaderView *_headerView;
    NSImageView *_headerImageView;
    NSTextField *_headerTitleLabel;
    NSTextField *_headerDescriptionLabel;
    NSSegmentedControl *_destinationControl;
    NSView *_contentView;
    NSView *_nameInputView;
    NSView *_organizationInputView;
    NSPopUpButton *_organizationPopUpButton;
    NSView *_projectInputView;
    NSPopUpButton *_projectPopUpButton;
    NSView *_locationInputView;
    NSPopUpButton *_locationPopUpButton;
    NSView *_signinView;
    NSStackView *_inputStack;
    NSButton *_deleteButton;
    NSButton *_saveButton;
    NSButton *_learnMoreButton;
    NSView *_buttonContainer;
    SCKUser *_userWithProjects;
    SCKAPIOperation *_projectsRequest;
}

+ (id)saveSheetWithDocumentName:(id)arg1 allowDeletion:(BOOL)arg2;
@property(nonatomic) BOOL allowDocumentDeletion; // @synthesize allowDocumentDeletion=_allowDocumentDeletion;
@property(retain, nonatomic) SCKAPIOperation *projectsRequest; // @synthesize projectsRequest=_projectsRequest;
@property(retain, nonatomic) SCKUser *userWithProjects; // @synthesize userWithProjects=_userWithProjects;
@property(retain, nonatomic) NSView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(retain, nonatomic) NSButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) NSButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) NSStackView *inputStack; // @synthesize inputStack=_inputStack;
@property(retain, nonatomic) NSView *signinView; // @synthesize signinView=_signinView;
@property(retain, nonatomic) NSPopUpButton *locationPopUpButton; // @synthesize locationPopUpButton=_locationPopUpButton;
@property(retain, nonatomic) NSView *locationInputView; // @synthesize locationInputView=_locationInputView;
@property(retain, nonatomic) NSPopUpButton *projectPopUpButton; // @synthesize projectPopUpButton=_projectPopUpButton;
@property(retain, nonatomic) NSView *projectInputView; // @synthesize projectInputView=_projectInputView;
@property(retain, nonatomic) NSPopUpButton *organizationPopUpButton; // @synthesize organizationPopUpButton=_organizationPopUpButton;
@property(retain, nonatomic) NSView *organizationInputView; // @synthesize organizationInputView=_organizationInputView;
@property(retain, nonatomic) NSView *nameInputView; // @synthesize nameInputView=_nameInputView;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSSegmentedControl *destinationControl; // @synthesize destinationControl=_destinationControl;
@property(retain, nonatomic) NSTextField *headerDescriptionLabel; // @synthesize headerDescriptionLabel=_headerDescriptionLabel;
@property(retain, nonatomic) NSTextField *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) NSImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) MSHeaderView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) _TtC6Sketch18MSRecentPlacesList *recentPlaces; // @synthesize recentPlaces=_recentPlaces;
@property(retain, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property(retain, nonatomic) NSString *documentName; // @synthesize documentName=_documentName;
@property(nonatomic) long long destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (void)selectDesktop:(id)arg1;
- (id)dragTypes;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)delete:(id)arg1;
- (void)cancel:(id)arg1;
- (void)finishWithSender:(id)arg1;
- (void)confirm:(id)arg1;
- (void)learnMoreAboutCloud:(id)arg1;
- (void)signInToCloud:(id)arg1;
- (void)userDidChange:(id)arg1;
- (void)addRecentLocation:(id)arg1;
- (id)makeRecentLocationMenuItems;
- (BOOL)validateMenuItem:(id)arg1;
- (void)selectOtherLocation:(id)arg1;
- (id)selectedLocation;
- (void)selectLocation:(id)arg1;
- (id)makeLocationMenuItemForSearchPathDirectory:(unsigned long long)arg1;
- (id)makeLocationMenuItemWithURL:(id)arg1;
- (void)rebuildLocationsMenu;
@property(readonly, nonatomic) SCKProject *project;
- (id)projectsMenu;
- (void)updateProjectsMenu;
- (id)projects;
- (void)requestProjects;
@property(readonly, nonatomic) SCKOrganization *organization;
- (void)selectProject:(id)arg1;
- (void)selectOrganization:(id)arg1;
- (void)requestOrganizations;
- (BOOL)validateConfirmation;
- (void)updateButtonValidation;
- (void)setSigninViewVisible:(BOOL)arg1;
- (void)updateView;
@property(readonly, nonatomic) NSURL *localURL;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
