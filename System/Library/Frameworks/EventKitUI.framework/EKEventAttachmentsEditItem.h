/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <libobjc.A.dylib/EKEventAttachmentCellControllerDelegate.h>
#import <libobjc.A.dylib/EKEventAttachmentEditViewControllerDelegate.h>

@class NSArray, EKUITableViewCell, EKEvent, NSString;

@interface EKEventAttachmentsEditItem : EKEventEditItem <UIDocumentPickerDelegate, UIDropInteractionDelegate, EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate> {

	NSArray* _cellControllers;
	EKUITableViewCell* _addAttachmentCell;
	BOOL _documentPickerPresented;
	BOOL _attachmentsModified;
	EKEvent* _eventToModify;

}

@property (retain) EKEvent * eventToModify;                         //@synthesize eventToModify=_eventToModify - In the implementation block
@property (assign) BOOL attachmentsModified;                        //@synthesize attachmentsModified=_attachmentsModified - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(void)dealloc;
-(void)prepareForReload;
-(id)trailingSwipeActionsConfigurationForRowAtIndex:(long long)arg1 ;
-(BOOL)_shouldCondenseIntoSingleItem;
-(id)attachmentEvent;
-(BOOL)_shouldShowAddAttachmentCell;
-(id)_addAttachmentCell;
-(void)_showAddAttachmentViewControllerAnimated:(BOOL)arg1 ;
-(void)setAttachmentsModified:(BOOL)arg1 ;
-(void)_loadAndAddDataAttachmentFromItem:(id)arg1 ;
-(BOOL)attachmentsModified;
-(EKEvent *)eventToModify;
-(void)setEventToModify:(EKEvent *)arg1 ;
-(id)parentViewControllerForAttachmentCellController:(id)arg1 ;
-(unsigned long long)numberOfSubitems;
-(void)_cleanUpCellControllers;
-(id)owningEventForAttachmentCellController:(id)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(id)footerTitle;
-(BOOL)forceTableReloadOnSave;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)_addAttachment:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(id)owningEventForAttachmentEditViewController:(id)arg1 ;
-(void)attachmentEditViewController:(id)arg1 attachmentDidChange:(long long)arg2 ;
@end
