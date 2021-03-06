/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPMediaLibrary;

@interface MPMediaLibraryView : NSObject <NSCopying> {

	shared_ptr<mlcore::DeviceLibraryView>* _coreView;
	MPMediaLibrary* _library;
	unsigned long long _filteringOptions;

}

@property (nonatomic,readonly) shared_ptr<mlcore::DeviceLibraryView>* mlCoreView; 
@property (nonatomic,readonly) MPMediaLibrary * library;                                       //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) unsigned long long filteringOptions;                            //@synthesize filteringOptions=_filteringOptions - In the implementation block
-(MPMediaLibrary *)library;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)performCoreQuery:(shared_ptr<mlcore::Query>*)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithLibrary:(id)arg1 filteringOptions:(unsigned long long)arg2 ;
-(BOOL)hasEntitiesForModelKind:(id)arg1 ;
-(shared_ptr<mlcore::QueryResult>*)_performCoreQuery:(shared_ptr<mlcore::Query>*)arg1 error:(id*)arg2 ;
-(shared_ptr<mlcore::DeviceLibraryView>*)mlCoreView;
-(void)performCoreSearchQuery:(shared_ptr<mlcore::LocalizedSearchQuery>*)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)filteringOptions;
@end

