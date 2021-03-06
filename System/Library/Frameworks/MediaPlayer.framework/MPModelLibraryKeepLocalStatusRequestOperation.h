/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelObject, MPMediaLibraryView, NSNumber;

@interface MPModelLibraryKeepLocalStatusRequestOperation : MPAsyncOperation {

	/*^block*/id _downloadablePlaylistItemEntityQueryBlock;
	long long _enableState;
	MPModelObject* _identifyingModelObject;
	MPMediaLibraryView* _libraryView;
	NSNumber* _redownloadableItemCount;
	/*^block*/id _responseHandler;
	shared_ptr<mlcore::EntityQuery>* _downloadableItemsQuery;

}

@property (assign,nonatomic) shared_ptr<mlcore::EntityQuery>* downloadableItemsQuery;              //@synthesize downloadableItemsQuery=_downloadableItemsQuery - In the implementation block
@property (nonatomic,copy) id downloadablePlaylistItemEntityQueryBlock;                            //@synthesize downloadablePlaylistItemEntityQueryBlock=_downloadablePlaylistItemEntityQueryBlock - In the implementation block
@property (assign,nonatomic) long long enableState;                                                //@synthesize enableState=_enableState - In the implementation block
@property (nonatomic,retain) MPModelObject * identifyingModelObject;                               //@synthesize identifyingModelObject=_identifyingModelObject - In the implementation block
@property (nonatomic,copy) MPMediaLibraryView * libraryView;                                       //@synthesize libraryView=_libraryView - In the implementation block
@property (nonatomic,copy) NSNumber * redownloadableItemCount;                                     //@synthesize redownloadableItemCount=_redownloadableItemCount - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                     //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setRedownloadableItemCount:(NSNumber *)arg1 ;
-(id)responseHandler;
-(void)setIdentifyingModelObject:(MPModelObject *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(MPMediaLibraryView *)libraryView;
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(long long)enableState;
-(void)setEnableState:(long long)arg1 ;
-(NSNumber *)redownloadableItemCount;
-(MPModelObject *)identifyingModelObject;
-(void)execute;
-(void)setDownloadablePlaylistItemEntityQueryBlock:(id)arg1 ;
-(id)downloadablePlaylistItemEntityQueryBlock;
-(void)setDownloadableItemsQuery:(shared_ptr<mlcore::EntityQuery>*)arg1 ;
-(shared_ptr<mlcore::EntityQuery>*)downloadableItemsQuery;
@end

