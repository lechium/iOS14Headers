/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelObject, MPMediaLibrary, MPModelKind;

@interface MPModelLibraryHasPurchasesRequest : NSObject {

	MPModelObject* _modelObject;
	MPMediaLibrary* _mediaLibrary;
	MPModelKind* _itemKind;

}

@property (nonatomic,retain) MPModelObject * modelObject;                //@synthesize modelObject=_modelObject - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) MPModelKind * itemKind;                     //@synthesize itemKind=_itemKind - In the implementation block
-(MPModelObject *)modelObject;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(MPModelKind *)itemKind;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setModelObject:(MPModelObject *)arg1 ;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(void)setItemKind:(MPModelKind *)arg1 ;
@end

