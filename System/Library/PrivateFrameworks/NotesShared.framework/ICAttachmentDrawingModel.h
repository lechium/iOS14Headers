/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICAttachmentModel.h>

@class ICDrawingVersionedDocument, ICDrawing;

@interface ICAttachmentDrawingModel : ICAttachmentModel {

	ICDrawingVersionedDocument* _drawingDocument;
	BOOL _observingAttachment;

}

@property (assign,nonatomic) BOOL observingAttachment;              //@synthesize observingAttachment=_observingAttachment - In the implementation block
@property (nonatomic,readonly) ICDrawing * drawing; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)attachmentIsDeallocating:(id)arg1 ;
-(BOOL)supportsQuickLook;
-(void)startObservingAttachment;
-(void)stopObservingAttachment:(id)arg1 ;
-(BOOL)observingAttachment;
-(void)setObservingAttachment:(BOOL)arg1 ;
-(id)drawingDocument;
-(void)drawingPreviewIsUpToDate;
-(ICDrawing *)drawing;
-(id)saveURL;
-(BOOL)canSaveURL;
-(long long)previewImageOrientation;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithAttachment:(id)arg1 ;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(BOOL)hasPreviews;
-(BOOL)previewsSupportMultipleAppearances;
-(CGAffineTransform)previewImageOrientationTransform;
-(id)previewImageURL;
-(BOOL)preferLocalPreviewImages;
-(BOOL)shouldSyncPreviewImageToCloud:(id)arg1 ;
-(BOOL)showThumbnailInNoteList;
-(id)previewItemTitle;
-(id)previewItemURL;
@end
