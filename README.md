# DistributedRocksdb

This is a project to build a distributed rocksdb kv storage engine.

# Getting Started

## Build 

Execute follow build command on the machine with docker installed.

```
sudo make build-dev
```

## Run demo in docker

- step 1, create docker sub net

```
sudo make create-net
```

command output
```
docker network create --subnet=172.18.0.0/16 mytestnetwork
f57ad3d454f27f4b84efca3ce61bf4764bd30ce3d4971b85477daf05c6ae28a3
```

- step 2, run cluster in shard mode

```
sudo make run-demo
```

- step 3, use eraftkv-ctl to operator the cluster

```
add_group: ./eraftkv-ctl [metaserver addresses] add_group [groupid] [group server addresses]
remove_group: ./eraftkv-ctl [metaserver addresses] remove_group [group id] [node id]
query_groups: ./eraftkv-ctl [metaserver addresses] query_groups
set_slot: ./eraftkv-ctl [metaserver addresses] set_slot [groupid] [startSlot-endSlot]
put_kv: ./eraftkv-ctl [metaserver addresses] put_kv [key] [value]
get_kv: ./eraftkv-ctl [metaserver addresses] get_kv [key]
```

You can use follow command to run a basic rw bench test with ERaftKV
```
sudo make run-demo-test
```

- step 4, clean all
```
sudo make stop-demo
sudo make rm-net
```

# Contributing

You can quickly participate in development by following the instructions in [CONTROLUTING.md](https://github.com/eraft-io/eraft/blob/master/CONTRIBUTING.md)
