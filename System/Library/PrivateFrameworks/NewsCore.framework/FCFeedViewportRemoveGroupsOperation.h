/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCFeedViewport, FCFeedDescriptor, FCFeedViewportDiff;

@interface FCFeedViewportRemoveGroupsOperation : FCOperation {

	FCFeedViewport* _viewport;
	/*^block*/id _groupRemovalTestBlock;
	FCFeedDescriptor* _feedDescriptor;
	/*^block*/id _removeGroupsCompletionHandler;
	FCFeedViewport* _resultViewport;
	FCFeedViewportDiff* _viewportDiff;

}

@property (nonatomic,retain) FCFeedViewport * resultViewport;                //@synthesize resultViewport=_resultViewport - In the implementation block
@property (nonatomic,retain) FCFeedViewportDiff * viewportDiff;              //@synthesize viewportDiff=_viewportDiff - In the implementation block
@property (nonatomic,retain) FCFeedViewport * viewport;                      //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,copy) id groupRemovalTestBlock;                         //@synthesize groupRemovalTestBlock=_groupRemovalTestBlock - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;              //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,copy) id removeGroupsCompletionHandler;                 //@synthesize removeGroupsCompletionHandler=_removeGroupsCompletionHandler - In the implementation block
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(FCFeedDescriptor *)feedDescriptor;
-(FCFeedViewport *)viewport;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(FCFeedViewport *)resultViewport;
-(void)setViewportDiff:(FCFeedViewportDiff *)arg1 ;
-(FCFeedViewportDiff *)viewportDiff;
-(id)groupRemovalTestBlock;
-(id)removeGroupsCompletionHandler;
-(void)setGroupRemovalTestBlock:(id)arg1 ;
-(void)setRemoveGroupsCompletionHandler:(id)arg1 ;
-(void)setResultViewport:(FCFeedViewport *)arg1 ;
-(void)operationDidFinishWithError:(id)arg1 ;
@end
