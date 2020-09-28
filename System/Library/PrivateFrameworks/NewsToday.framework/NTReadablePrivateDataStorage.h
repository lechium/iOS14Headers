/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTReadablePrivateDataStorage.h>

@protocol NTReadablePrivateDataStorage <NSObject>
@required
-(void)readPrivateDataWithAccessor:(/*^block*/id)arg1;

@end


@class FCFileCoordinatedTodayDropbox, FCFileCoordinatedTodayPrivateDataTransactionQueue, NSString;

@interface NTReadablePrivateDataStorage : NSObject <NTReadablePrivateDataStorage> {

	FCFileCoordinatedTodayDropbox* _dropbox;
	FCFileCoordinatedTodayPrivateDataTransactionQueue* _transactionQueue;

}

@property (nonatomic,retain) FCFileCoordinatedTodayDropbox * dropbox;                                           //@synthesize dropbox=_dropbox - In the implementation block
@property (nonatomic,retain) FCFileCoordinatedTodayPrivateDataTransactionQueue * transactionQueue;              //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readPrivateDataWithAccessor:(/*^block*/id)arg1 ;
-(void)setTransactionQueue:(FCFileCoordinatedTodayPrivateDataTransactionQueue *)arg1 ;
-(FCFileCoordinatedTodayDropbox *)dropbox;
-(id)init;
-(FCFileCoordinatedTodayPrivateDataTransactionQueue *)transactionQueue;
-(id)initWithDropbox:(id)arg1 transactionQueue:(id)arg2 ;
-(void)setDropbox:(FCFileCoordinatedTodayDropbox *)arg1 ;
@end
