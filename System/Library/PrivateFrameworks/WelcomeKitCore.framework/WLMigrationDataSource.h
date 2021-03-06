/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WLMigrationDataSource <NSObject>
@required
-(void)dataForSummary:(id)arg1 migrator:(id)arg2 completion:(/*^block*/id)arg3;
-(void)accountsDataForMigrator:(id)arg1 completion:(/*^block*/id)arg2;
-(void)summariesDataForAccount:(id)arg1 migrator:(id)arg2 completion:(/*^block*/id)arg3;
-(void)itemSizeForSummary:(id)arg1 migrator:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fileForSummary:(id)arg1 migrator:(id)arg2 fileAccessor:(/*^block*/id)arg3 completion:(/*^block*/id)arg4;
-(void)dataSegmentForSummary:(id)arg1 byteRange:(NSRange)arg2 migrator:(id)arg3 completion:(/*^block*/id)arg4;
-(void)updateUIWithProgress:(double)arg1 logString:(id)arg2 completion:(/*^block*/id)arg3;

@end

