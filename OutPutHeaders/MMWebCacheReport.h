/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MMWebCacheReport : XXUnknownSuperclass {
}
+(void)reportHitCacheAsyncPage;
+(void)reportHitCacheSyncPage;
+(void)reportBrandPreDownload;
+(void)reportFailToAsyncCache;
+(void)reportFailToSyncCache;
+(void)reportFailToLoadPublicLibPage;
+(void)reportBrandPreDownloadUrl:(id)url;
+(void)reportFailToSaveRes;
+(void)reportFailToDownloadRes;
+(void)reportCacheTooLargeDataOnceTime;
+(void)reportLoadCacheCrc32Fail;
+(void)reportFoundInDBButNotInDisk;
+(void)reportHitCachePageForUrl:(id)url;
+(void)reportHitDiskUsageLimitForAppId:(id)appId size:(long long)size;
+(void)reportFailToLoadCachePage;
+(void)reportLoadPageTime:(double)time url:(id)url;
+(void)reportCacheJsApiRequestForAsync;
+(void)reportCacheJsApiRequestForSync;
+(void)reportPublicResRequestUrl:(id)url resUrl:(id)url2 isHit:(BOOL)hit;
@end

